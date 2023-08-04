#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    wchar_t buf[512];
    DWORD pcbBuffer = sizeof(buf); // 설정된 버퍼의 크기

    if (GetUserName(buf, &pcbBuffer)) { // 사용자 이름을 가져옴
        printf("User name: %s\n", buf); // 사용자 이름 출력
    }
    else {
        printf("Failed to get user name.\n"); // 사용자 이름을 가져오지 못한 경우
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
        printf("소스 파일을 열 수 없습니다.");
        return 1;
    }
    //A가 아스키 chr*
    //W가 유니코드 wchar* wchar_t,tchar
    // 대상 파일 생성 또는 열기
    HANDLE hDestinationFile = CreateFileA(destinationPath, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hDestinationFile == INVALID_HANDLE_VALUE) {
        printf("대상 파일을 열 수 없습니다.");
        CloseHandle(hSourceFile);
        return 1;
    }
    // 소스 파일에서 읽어서 대상 파일로 쓰기

    DWORD bytesRead = 0;
    DWORD bytesWritten = 0;
    char databuff[512]; // 데이터를 읽고 쓸 버퍼

    while (ReadFile(hSourceFile, databuff, sizeof(databuff), &bytesRead, NULL) && bytesRead > 0) {
        //hSourceFile HANDLE을 이용해서 databuff만큼 읽어서 읽은 바이트 수를 받는 변수에 대한 포인터인
        //&bytesRead변수가 0보다 큰 값을 가지는지 확인 합니다. 읽어서 bytesRead 변수에 저장을 한 후,
        //databuff 버퍼에 있는 데이터를 대상 파일에 씁니다.
        //bytesRead 변수에 저장된 값만큼의 바이트를 쓰고, 실제로 쓴 바이트 수를 bytesWritten 변수에 저장합니다.
        if (!WriteFile(hDestinationFile, databuff, bytesRead, &bytesWritten, NULL)
            || bytesRead != bytesWritten) {
            //쓰기 중에 오류가 발생한 경우 오류 메시지를 출력하고, 열린 파일 핸들을 닫고 프로그램을 종료합니다.
            printf("파일을 복사하는 동안 오류가 발생했습니다.");
            CloseHandle(hSourceFile);
            CloseHandle(hDestinationFile);
            return 1;
        }

    }

    // 핸들 닫기
    CloseHandle(hSourceFile);
    CloseHandle(hDestinationFile);
    //루프가 모두 완료되면 파일 핸들을 닫고, 성공적으로 파일이 복사되었음을 알리는 메시지를 출력합니다.
    printf("파일이 성공적으로 복사되었습니다.");

    return 0;
}