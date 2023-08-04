#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    wchar_t buf[512];
    DWORD pcbBuffer = sizeof(buf); // ������ ������ ũ��

    if (GetUserName(buf, &pcbBuffer)) { // ����� �̸��� ������
        printf("User name: %s\n", buf); // ����� �̸� ���
    }
    else {
        printf("Failed to get user name.\n"); // ����� �̸��� �������� ���� ���
    }
    wchar_t* sourcePath = "C:\\Users\\";
    sourcePath = malloc(sizeof(wchar_t) * 100);
    wcscpy(sourcePath, L"C:\\Users\\");
    wcscat(sourcePath, buf);
    wcscat(sourcePath, L"\\source.txt");
    printf("%S\n", sourcePath);
    wchar_t* destinationPath = "C:\\Users\\";
    destinationPath = malloc(sizeof(wchar_t) * 100);
    wcscpy(destinationPath, L"C:\\Users\\");
    wcscat(destinationPath, buf);
    wcscat(destinationPath, L"\\AppData\\Local\\Temp\\destination.txt");
    //{}\\AppData\\Local\\Temp\\destination.txt";


    printf("%S\n", destinationPath);

    HANDLE hSourceFile = CreateFile(sourcePath, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hSourceFile == INVALID_HANDLE_VALUE) {
        printf("�ҽ� ������ �� �� �����ϴ�.");
        return 1;
    }
    //A�� �ƽ�Ű chr*
    //W�� �����ڵ� wchar* wchar_t,tchar
    // ��� ���� ���� �Ǵ� ����
    HANDLE hDestinationFile = CreateFileA(destinationPath, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hDestinationFile == INVALID_HANDLE_VALUE) {
        printf("��� ������ �� �� �����ϴ�.");
        CloseHandle(hSourceFile);
        return 1;
    }
    // �ҽ� ���Ͽ��� �о ��� ���Ϸ� ����

    DWORD bytesRead = 0;
    DWORD bytesWritten = 0;
    char databuff[512]; // �����͸� �а� �� ����

    while (ReadFile(hSourceFile, databuff, sizeof(databuff), &bytesRead, NULL) && bytesRead > 0) {
        //hSourceFile HANDLE�� �̿��ؼ� databuff��ŭ �о ���� ����Ʈ ���� �޴� ������ ���� ��������
        //&bytesRead������ 0���� ū ���� �������� Ȯ�� �մϴ�. �о bytesRead ������ ������ �� ��,
        //databuff ���ۿ� �ִ� �����͸� ��� ���Ͽ� ���ϴ�.
        //bytesRead ������ ����� ����ŭ�� ����Ʈ�� ����, ������ �� ����Ʈ ���� bytesWritten ������ �����մϴ�.
        if (!WriteFile(hDestinationFile, databuff, bytesRead, &bytesWritten, NULL)
            || bytesRead != bytesWritten) {
            //���� �߿� ������ �߻��� ��� ���� �޽����� ����ϰ�, ���� ���� �ڵ��� �ݰ� ���α׷��� �����մϴ�.
            printf("������ �����ϴ� ���� ������ �߻��߽��ϴ�.");
            CloseHandle(hSourceFile);
            CloseHandle(hDestinationFile);
            return 1;
        }

    }

    // �ڵ� �ݱ�
    CloseHandle(hSourceFile);
    CloseHandle(hDestinationFile);
    //������ ��� �Ϸ�Ǹ� ���� �ڵ��� �ݰ�, ���������� ������ ����Ǿ����� �˸��� �޽����� ����մϴ�.
    printf("������ ���������� ����Ǿ����ϴ�.");

    return 0;
}