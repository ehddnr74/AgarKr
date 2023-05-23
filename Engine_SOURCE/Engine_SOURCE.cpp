﻿// Engine_SOURCE.cpp : 정적 라이브러리를 위한 함수를 정의합니다.
//

#include "framework.h"

// TODO: 라이브러리 함수의 예제입니다.
void fnEngineSOURCE()
{

}

// 라이브러리란?
// 자주 사용되는 기능이나 함수 서브루틴등등등 가르켜서 총체적으로
// 구현해놓은 프로젝트이다.

// 동적 라이브러리
// xxxx.dll 
// 프로그램 시작하고 있는동안에 해당 라이브러리를 참조하여 
// 실행한다.
// 하나의 메모리영역에 올려두고 여러프로그램들이 나누어 사용하는
// 라이브러리 
//

// 장단점
// 메모리를 절약할 수 있다.
// 프로그램에 한번 올려진 메모리를 공유해 사용하므로 사용공간 자체가 적다.
// 업그레이드(패치)를 비교적 정적라이브러리보다 쉽게 진행 가능하다.
// 실행 중간에 패치가 가능하다.

// 단점 
// 외부의존도가 높아진다.
// 공유 라이브러리를 메모리에 올리려면 찾고 검색하는데 시간이 걸리므로
// 성능저하가 생긴다.

// 정적 라이브러리
// 프로그램을 컴파일하는 과정에 내가 작성한 라이브러리코드들이
// 포함이된다.
// xxxx.lib

// 라이브러리 코드가 바뀌면 다시 빌드 또는 
// 다시 배포를 해줘야한다. 패치해줘야한다.


// lib는 링크(linking)시 필요하고 dll 프로그램 실행시 필요하다.

// 장점
// 한번 완성이 되면 안정적으로 프로그램 사용이 가능하다.
// 컴파일 시 필요한 라이브러리를 프로그램내에 적재하기 때문에
// 앱을 안정적으로 활용할 수 있게 된다.

// 런타임 시 외부를 참조할 필요가 없기 때문에 속도에서 장점이 있다.
//
// 단점
// 라이브러리 변경이 필요할 시 변경된 라이브러리 재배포 하면 안되고
// 모든 프로그램 처음부터 다시 빌드하여
// 새로운 버전으로 배포를 진행 해주어야 한다. 