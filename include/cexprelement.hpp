/*
 * cexprelement.hpp
 *
 *  Created on: 25 oct. 2009
 *      Author: saturn
 */

#pragma once

class CType;

class CExprElement
{
public:
	CExprElement(const CType* poType) : mpoType(poType){};

	/*
	 * Get the type of the expr element (the type of the result).
	 *
	 * @return const CType*
	 */
	virtual const CType* getType() const { return mpoType; }


private:
	const CType* mpoType;


};

