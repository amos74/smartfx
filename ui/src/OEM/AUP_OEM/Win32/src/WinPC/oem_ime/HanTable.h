#pragma once

#ifndef __HANGUL_CODE_DEFINE_H__
#define __HANGUL_CODE_DEFINE_H__

class CCodeTable
{
	/* 
		CodeTable[X][0] == 완성형
		CodeTable[X][1] == 조합형
		CodeTable[X][2] == 유니코드
	*/
public:
	static unsigned short CodeTable[11172][3];	//가~힣
	static unsigned short CodeTable2[67][3];	//ㄱ~ㅣ (아직 유니코드 부분은 못했음)
	static unsigned short GetWansungCodeFromJohab(unsigned short CODE);
};

#endif// __HANGUL_CODE_DEFINE_H__

