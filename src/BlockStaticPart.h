#pragma once
#ifndef BlockStaticPart_h__
#define BlockStaticPart_h__

#include <stdint.h>
#include <memory>
#include "Tesselator.h"

typedef uint16_t BlockId;

// BlockId == 0 - ����������� ��������� ����� / ���� �� ��������.
// BlockId == 1 - ������ ���� / ���� �����������.


// �������� ����������� ������ ��� �����.
// ��������, ���������� � �.�.

class BlockStaticPart
{
public:
  BlockStaticPart();
  ~BlockStaticPart();

  void SetTesselator(std::unique_ptr<Tesselator> tesselator);

  const std::unique_ptr<Tesselator> &GetTesselator() const;

private:
  std::unique_ptr<Tesselator> mTesselator;

};



#endif // BlockStaticPart_h__
