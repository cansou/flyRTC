/* SK_qsdomainverifyclass.cpp

  Generated by SKxml2class from testcase/domainverify.xml

  Please DO NOT edit unless you know exactly what you are doing.


*/

#include <string.h>

#include "skbuiltintype.h"

#include "sk_builtin.h"

using namespace std;
using namespace Comm;

//============================================================

Qs_uin :: Qs_uin()
{
	m_ptImpl =  (  qs_uin_t * ) calloc ( sizeof(  qs_uin_t ), 1 ) ;
}

Qs_uin :: ~Qs_uin()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

Qs_uin :: Qs_uin( const Qs_uin & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

Qs_uin :: Qs_uin( const qs_uin_t & other )
{
	m_ptImpl =  (  qs_uin_t * ) calloc ( sizeof(  qs_uin_t ), 1 ) ;
	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}


Qs_uin & Qs_uin :: operator=( const Qs_uin & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  qs_uin_t * ) calloc ( sizeof(  qs_uin_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

qs_uin_t * Qs_uin :: GetImpl() const
{
	return m_ptImpl;
}

qs_uin_t * Qs_uin :: DetachImpl()
{
	qs_uin_t  * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}

void Qs_uin :: SetImpl( qs_uin_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void Qs_uin :: SetVal( const uint32_t & tVal )
{
	m_ptImpl->uin = tVal;
}


uint32_t Qs_uin :: GetVal() const
{
	return  m_ptImpl->uin;
}

//============================================================

SKBuiltinString :: SKBuiltinString()
{
	m_ptImpl =  (  SKBuiltinString_t * ) calloc ( sizeof(  SKBuiltinString_t ), 1 ) ;
}

SKBuiltinString :: ~SKBuiltinString()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinString :: SKBuiltinString( const SKBuiltinString & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinString :: SKBuiltinString( const SKBuiltinString_t & other )
{
	m_ptImpl =  (  SKBuiltinString_t * ) calloc ( sizeof(  SKBuiltinString_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinString & SKBuiltinString :: operator=( const SKBuiltinString & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinString_t * ) calloc ( sizeof(  SKBuiltinString_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinString_t * SKBuiltinString :: DetachImpl()
{
	SKBuiltinString_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}

SKBuiltinString_t * SKBuiltinString :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinString :: SetImpl( SKBuiltinString_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

int SKBuiltinString :: GetLen() const
{
	if( m_ptImpl == NULL || m_ptImpl->pcBuff == NULL )
		return 0;
	return strlen( m_ptImpl->pcBuff );
}

void SKBuiltinString :: SetString( const char * tBuff )
{
	int iBuffLen = strlen( tBuff );

	if( m_ptImpl->pcBuff != NULL )
	{
		free( m_ptImpl->pcBuff );
		m_ptImpl->pcBuff = NULL;
	}

	m_ptImpl->pcBuff = ( char * )calloc( sizeof( char ) , iBuffLen + 1 );

	strcpy(m_ptImpl->pcBuff, tBuff);
}


char * SKBuiltinString :: GetString( int * iSize ) const
{
	if( iSize != NULL )
		*iSize = GetLen();

	return  m_ptImpl->pcBuff;
}

//============================================================

SKBuiltinBuffer :: SKBuiltinBuffer()
{
	m_ptImpl = ( SKBuiltinBuffer_t * )calloc( sizeof( SKBuiltinBuffer_t), 1 );
}

SKBuiltinBuffer :: ~SKBuiltinBuffer()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinBuffer :: SKBuiltinBuffer( const SKBuiltinBuffer & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinBuffer :: SKBuiltinBuffer( const SKBuiltinBuffer_t & other )
{
	m_ptImpl = ( SKBuiltinBuffer_t * )calloc( sizeof( SKBuiltinBuffer_t ), 1 );
	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}


SKBuiltinBuffer & SKBuiltinBuffer :: operator=( const SKBuiltinBuffer & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl = ( SKBuiltinBuffer_t * )calloc( sizeof( SKBuiltinBuffer_t ), 1 );
	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}
SKBuiltinBuffer_t * SKBuiltinBuffer :: DetachImpl()
{
	SKBuiltinBuffer_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}

SKBuiltinBuffer_t * SKBuiltinBuffer :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinBuffer :: SetImpl( SKBuiltinBuffer_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

int SKBuiltinBuffer :: GetLen( )const
{
	return m_ptImpl->iLen;
}

void SKBuiltinBuffer :: SetBuffer( const char *pcBuff, const int &iSize )
{
	if( m_ptImpl -> pcBuff )
	{
		free( m_ptImpl->pcBuff );
		m_ptImpl->pcBuff = NULL;
	}
	
	m_ptImpl->pcBuff = ( char * ) calloc( sizeof( char ) , iSize );

	memcpy( m_ptImpl->pcBuff, pcBuff, iSize );
	m_ptImpl->iLen = iSize;

}

char * SKBuiltinBuffer :: GetBuffer( int *iSize ) const
{
	if( iSize != NULL )
		*iSize = m_ptImpl->iLen;
	return  m_ptImpl->pcBuff;
}

//============================================================

SKBuiltinDouble64 :: SKBuiltinDouble64()
{
	m_ptImpl =  (  SKBuiltinDouble64_t * ) calloc ( sizeof(  SKBuiltinDouble64_t ), 1 ) ;
}

SKBuiltinDouble64 :: ~SKBuiltinDouble64()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinDouble64 :: SKBuiltinDouble64( const SKBuiltinDouble64 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinDouble64 :: SKBuiltinDouble64( const SKBuiltinDouble64_t & other )
{
	m_ptImpl = NULL;

	m_ptImpl =  (  SKBuiltinDouble64_t * ) calloc ( sizeof(  SKBuiltinDouble64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinDouble64 & SKBuiltinDouble64 :: operator=( const SKBuiltinDouble64 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinDouble64_t * ) calloc ( sizeof(  SKBuiltinDouble64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}
SKBuiltinDouble64_t * SKBuiltinDouble64 :: DetachImpl()
{
	SKBuiltinDouble64_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinDouble64_t * SKBuiltinDouble64 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinDouble64 :: SetImpl( SKBuiltinDouble64_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinDouble64 :: SetVal( const double & dVal )
{
	m_ptImpl->dVal = dVal;
}


double SKBuiltinDouble64 :: GetVal() const
{
	return  m_ptImpl->dVal;
}

//============================================================

SKBuiltinFloat32 :: SKBuiltinFloat32()
{
	m_ptImpl =  (  SKBuiltinFloat32_t * ) calloc ( sizeof(  SKBuiltinFloat32_t ), 1 ) ;
}

SKBuiltinFloat32 :: ~SKBuiltinFloat32()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinFloat32 :: SKBuiltinFloat32( const SKBuiltinFloat32 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinFloat32 :: SKBuiltinFloat32( const SKBuiltinFloat32_t & other )
{
	m_ptImpl = NULL;

	m_ptImpl =  (  SKBuiltinFloat32_t * ) calloc ( sizeof(  SKBuiltinFloat32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinFloat32 & SKBuiltinFloat32 :: operator=( const SKBuiltinFloat32 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinFloat32_t * ) calloc ( sizeof(  SKBuiltinFloat32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinFloat32_t * SKBuiltinFloat32 :: DetachImpl()
{
	SKBuiltinFloat32_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinFloat32_t * SKBuiltinFloat32 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinFloat32 :: SetImpl( SKBuiltinFloat32_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinFloat32 :: SetVal( const float &fVal )
{
	m_ptImpl->fVal = fVal;
}


float SKBuiltinFloat32 :: GetVal() const
{
	return  m_ptImpl->fVal;
}

//============================================================

SKBuiltinUint64 :: SKBuiltinUint64()
{
	m_ptImpl =  (  SKBuiltinUint64_t * ) calloc ( sizeof(  SKBuiltinUint64_t ), 1 ) ;
}

SKBuiltinUint64 :: ~SKBuiltinUint64()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinUint64 :: SKBuiltinUint64( const SKBuiltinUint64 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinUint64 :: SKBuiltinUint64( const SKBuiltinUint64_t & other )
{
	m_ptImpl =  (  SKBuiltinUint64_t * ) calloc ( sizeof(  SKBuiltinUint64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinUint64 & SKBuiltinUint64 :: operator=( const SKBuiltinUint64 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinUint64_t * ) calloc ( sizeof(  SKBuiltinUint64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinUint64_t * SKBuiltinUint64 :: DetachImpl()
{
	SKBuiltinUint64_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinUint64_t * SKBuiltinUint64 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinUint64 :: SetImpl( SKBuiltinUint64_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinUint64 :: SetVal( const uint64_t & llVal )
{
	m_ptImpl->llVal = llVal;
}


uint64_t SKBuiltinUint64 :: GetVal() const
{
	return  m_ptImpl->llVal;
}

//============================================================

SKBuiltinInt64 :: SKBuiltinInt64()
{
	m_ptImpl =  (  SKBuiltinInt64_t * ) calloc ( sizeof(  SKBuiltinInt64_t ), 1 ) ;
}

SKBuiltinInt64 :: ~SKBuiltinInt64()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinInt64 :: SKBuiltinInt64( const SKBuiltinInt64 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinInt64 :: SKBuiltinInt64( const SKBuiltinInt64_t & other )
{
	m_ptImpl =  (  SKBuiltinInt64_t * ) calloc ( sizeof(  SKBuiltinInt64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinInt64 & SKBuiltinInt64 :: operator=( const SKBuiltinInt64 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinInt64_t * ) calloc ( sizeof(  SKBuiltinInt64_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinInt64_t * SKBuiltinInt64 :: DetachImpl()
{
	SKBuiltinInt64_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinInt64_t * SKBuiltinInt64 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinInt64 :: SetImpl( SKBuiltinInt64_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinInt64 :: SetVal( const int64_t & llVal )
{
	m_ptImpl->llVal = llVal;
}


int64_t SKBuiltinInt64 :: GetVal() const
{
	return  m_ptImpl->llVal;
}

//============================================================

SKBuiltinUint16 :: SKBuiltinUint16()
{
	m_ptImpl =  (  SKBuiltinUint16_t * ) calloc ( sizeof(  SKBuiltinUint16_t ), 1 ) ;
}

SKBuiltinUint16 :: ~SKBuiltinUint16()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinUint16 :: SKBuiltinUint16( const SKBuiltinUint16 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinUint16 :: SKBuiltinUint16( const SKBuiltinUint16_t & other )
{
	m_ptImpl =  (  SKBuiltinUint16_t * ) calloc ( sizeof(  SKBuiltinUint16_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinUint16 & SKBuiltinUint16 :: operator=( const SKBuiltinUint16 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinUint16_t * ) calloc ( sizeof(  SKBuiltinUint16_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinUint16_t * SKBuiltinUint16 :: DetachImpl()
{
	SKBuiltinUint16_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}

SKBuiltinUint16_t * SKBuiltinUint16 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinUint16 :: SetImpl( SKBuiltinUint16_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinUint16 :: SetVal( const uint16_t & hVal )
{
	m_ptImpl->hVal = hVal;
}


uint16_t SKBuiltinUint16 :: GetVal() const
{
	return  m_ptImpl->hVal;
}

//============================================================

SKBuiltinInt16 :: SKBuiltinInt16()
{
	m_ptImpl =  (  SKBuiltinInt16_t * ) calloc ( sizeof(  SKBuiltinInt16_t ), 1 ) ;
}

SKBuiltinInt16 :: ~SKBuiltinInt16()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinInt16 :: SKBuiltinInt16( const SKBuiltinInt16 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinInt16 :: SKBuiltinInt16( const SKBuiltinInt16_t & other )
{
	m_ptImpl =  (  SKBuiltinInt16_t * ) calloc ( sizeof(  SKBuiltinInt16_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinInt16 & SKBuiltinInt16 :: operator=( const SKBuiltinInt16 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinInt16_t * ) calloc ( sizeof(  SKBuiltinInt16_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinInt16_t * SKBuiltinInt16 :: DetachImpl()
{
	SKBuiltinInt16_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinInt16_t * SKBuiltinInt16 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinInt16 :: SetImpl( SKBuiltinInt16_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinInt16 :: SetVal( const int16_t &hVal )
{
	m_ptImpl->hVal = hVal;
}


int16_t SKBuiltinInt16 :: GetVal() const
{
	return  m_ptImpl->hVal;
}

//============================================================

SKBuiltinUint8 :: SKBuiltinUint8()
{
	m_ptImpl =  (  SKBuiltinUint8_t * ) calloc ( sizeof(  SKBuiltinUint8_t ), 1 ) ;
}

SKBuiltinUint8 :: ~SKBuiltinUint8()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinUint8 :: SKBuiltinUint8( const SKBuiltinUint8 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinUint8 :: SKBuiltinUint8( const SKBuiltinUint8_t & other )
{
	m_ptImpl =  (  SKBuiltinUint8_t * ) calloc ( sizeof(  SKBuiltinUint8_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinUint8 & SKBuiltinUint8 :: operator=( const SKBuiltinUint8 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinUint8_t * ) calloc ( sizeof(  SKBuiltinUint8_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinUint8_t * SKBuiltinUint8 :: DetachImpl()
{
	SKBuiltinUint8_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinUint8_t * SKBuiltinUint8 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinUint8 :: SetImpl( SKBuiltinUint8_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinUint8 :: SetVal( const uint8_t &cVal )
{
	m_ptImpl->cVal = cVal;
}

uint8_t SKBuiltinUint8 :: GetVal() const
{
	return  m_ptImpl->cVal;
}

//============================================================

SKBuiltinInt8 :: SKBuiltinInt8()
{
	m_ptImpl =  (  SKBuiltinInt8_t * ) calloc ( sizeof(  SKBuiltinInt8_t ), 1 ) ;
}

SKBuiltinInt8 :: ~SKBuiltinInt8()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinInt8 :: SKBuiltinInt8( const SKBuiltinInt8 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinInt8 :: SKBuiltinInt8( const SKBuiltinInt8_t & other )
{
	m_ptImpl =  (  SKBuiltinInt8_t * ) calloc ( sizeof(  SKBuiltinInt8_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}


SKBuiltinInt8 & SKBuiltinInt8 :: operator=( const SKBuiltinInt8 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinInt8_t * ) calloc ( sizeof(  SKBuiltinInt8_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinInt8_t * SKBuiltinInt8 :: DetachImpl()
{
	SKBuiltinInt8_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinInt8_t * SKBuiltinInt8 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinInt8 :: SetImpl( SKBuiltinInt8_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinInt8 :: SetVal( const int8_t &cVal )
{
	m_ptImpl->cVal = cVal;
}


int8_t SKBuiltinInt8 :: GetVal() const
{
	return  m_ptImpl->cVal;
}

//============================================================

SKBuiltinUchar :: SKBuiltinUchar()
{
	m_ptImpl =  (  SKBuiltinUchar_t * ) calloc ( sizeof(  SKBuiltinUchar_t ), 1 ) ;
}

SKBuiltinUchar :: ~SKBuiltinUchar()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinUchar :: SKBuiltinUchar( const SKBuiltinUchar & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinUchar :: SKBuiltinUchar( const SKBuiltinUchar_t & other )
{
	m_ptImpl =  (  SKBuiltinUchar_t * ) calloc ( sizeof(  SKBuiltinUchar_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinUchar & SKBuiltinUchar :: operator=( const SKBuiltinUchar & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinUchar_t * ) calloc ( sizeof(  SKBuiltinUchar_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinUchar_t * SKBuiltinUchar :: DetachImpl()
{
	SKBuiltinUchar_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}

SKBuiltinUchar_t * SKBuiltinUchar :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinUchar :: SetImpl( SKBuiltinUchar_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinUchar :: SetVal( const unsigned char & cVal )
{
	m_ptImpl->cVal = cVal;
}


unsigned char SKBuiltinUchar :: GetVal() const
{
	return  m_ptImpl->cVal;
}

//============================================================

SKBuiltinChar :: SKBuiltinChar()
{
	m_ptImpl =  (  SKBuiltinChar_t * ) calloc ( sizeof(  SKBuiltinChar_t ), 1 ) ;
}

SKBuiltinChar :: ~SKBuiltinChar()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinChar :: SKBuiltinChar( const SKBuiltinChar & other )
{
	m_ptImpl = NULL;
	operator=( other );
}


SKBuiltinChar :: SKBuiltinChar( const SKBuiltinChar_t & other )
{
	m_ptImpl =  (  SKBuiltinChar_t * ) calloc ( sizeof(  SKBuiltinChar_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinChar & SKBuiltinChar :: operator=( const SKBuiltinChar & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinChar_t * ) calloc ( sizeof(  SKBuiltinChar_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinChar_t * SKBuiltinChar :: DetachImpl()
{
	SKBuiltinChar_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinChar_t * SKBuiltinChar :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinChar :: SetImpl( SKBuiltinChar_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinChar :: SetVal( const char & cVal )
{
	m_ptImpl->cVal = cVal;
}


char SKBuiltinChar :: GetVal() const
{
	return  m_ptImpl->cVal;
}

//============================================================

SKBuiltinUint32 :: SKBuiltinUint32()
{
	m_ptImpl =  (  SKBuiltinUint32_t * ) calloc ( sizeof(  SKBuiltinUint32_t ), 1 ) ;
}

SKBuiltinUint32 :: ~SKBuiltinUint32()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinUint32 :: SKBuiltinUint32( const SKBuiltinUint32 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinUint32 :: SKBuiltinUint32( const SKBuiltinUint32_t & other )
{
	m_ptImpl =  (  SKBuiltinUint32_t * ) calloc ( sizeof(  SKBuiltinUint32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinUint32 & SKBuiltinUint32 :: operator=( const SKBuiltinUint32 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinUint32_t * ) calloc ( sizeof(  SKBuiltinUint32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinUint32_t * SKBuiltinUint32 :: DetachImpl()
{
	SKBuiltinUint32_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinUint32_t * SKBuiltinUint32 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinUint32 :: SetImpl( SKBuiltinUint32_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinUint32 :: SetVal( const uint32_t & iVal )
{
	m_ptImpl->iVal = iVal;
}


uint32_t SKBuiltinUint32 :: GetVal() const
{
	return  m_ptImpl->iVal;
}

//============================================================

SKBuiltinInt32 :: SKBuiltinInt32()
{
	m_ptImpl =  (  SKBuiltinInt32_t * ) calloc ( sizeof(  SKBuiltinInt32_t ), 1 ) ;
}

SKBuiltinInt32 :: ~SKBuiltinInt32()
{
	if( m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
	}
	m_ptImpl = NULL;
}

SKBuiltinInt32 :: SKBuiltinInt32( const SKBuiltinInt32 & other )
{
	m_ptImpl = NULL;
	operator=( other );
}

SKBuiltinInt32 :: SKBuiltinInt32( const SKBuiltinInt32_t & other )
{
	m_ptImpl =  (  SKBuiltinInt32_t * ) calloc ( sizeof(  SKBuiltinInt32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, &other );
}

SKBuiltinInt32 & SKBuiltinInt32 :: operator=( const SKBuiltinInt32 & other )
{
	if( NULL != m_ptImpl )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}

	m_ptImpl =  (  SKBuiltinInt32_t * ) calloc ( sizeof(  SKBuiltinInt32_t ), 1 ) ;

	SKBuiltinPickle::DeepCopy( m_ptImpl, other.m_ptImpl );

	return *this;
}

SKBuiltinInt32_t * SKBuiltinInt32 :: DetachImpl()
{
	SKBuiltinInt32_t * ptImpl = m_ptImpl;
	m_ptImpl = NULL;
	return ptImpl;
}
SKBuiltinInt32_t * SKBuiltinInt32 :: GetImpl() const
{
	return m_ptImpl;
}

void SKBuiltinInt32 :: SetImpl( SKBuiltinInt32_t * Impl )
{
	if( m_ptImpl != NULL )
	{
		SKBuiltinPickle::FreeStructField( *m_ptImpl );
		free ( m_ptImpl );
		m_ptImpl = NULL;
	}
	m_ptImpl = Impl;
}

void SKBuiltinInt32 :: SetVal( const int32_t & iVal )
{
	m_ptImpl->iVal = iVal;
}


int32_t SKBuiltinInt32 :: GetVal() const
{
	return  m_ptImpl->iVal;
}

int SKBuiltinClass :: ToBuffer( Qs_uin * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle:: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, Qs_uin * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinString * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinString * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinBuffer * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinBuffer * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinDouble64 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinDouble64 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinFloat32 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinFloat32 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinUint64 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinUint64 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinInt64 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinInt64 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinUint16 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinUint16 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinInt16 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinInt16 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinUint8 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinUint8 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinInt8 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinInt8 * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinUchar * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinUchar * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinChar * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle :: ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinChar * poClass )
{
	return SKBuiltinPickle :: FromBuffer( poBuffer,poClass->GetImpl() );
}

int SKBuiltinClass :: ToBuffer( SKBuiltinUint32 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle ::  ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinUint32 * poClass )
{
	return SKBuiltinPickle ::  FromBuffer( poBuffer,poClass->GetImpl() );
}


int SKBuiltinClass :: ToBuffer( SKBuiltinInt32 * poClass, Comm::SKBuffer * poBuffer )
{
	return SKBuiltinPickle ::  ToBuffer( poClass->GetImpl(), poBuffer );
}

int SKBuiltinClass :: FromBuffer( Comm::SKBuffer * poBuffer, SKBuiltinInt32 * poClass )
{
	return SKBuiltinPickle ::  FromBuffer( poBuffer,poClass->GetImpl() );
}


