/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "internal/Mockfwk_interrupt_internal.h"

static const char* CMockString_fwk_interrupt_set_isr_fault = "fwk_interrupt_set_isr_fault";
static const char* CMockString_isr = "isr";

typedef struct _CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  cmock_fwk_interrupt_func_ptr1 Expected_isr;

} CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE;

static struct Mockfwk_interrupt_internalInstance
{
  CMOCK_MEM_INDEX_TYPE fwk_interrupt_set_isr_fault_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockfwk_interrupt_internal_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.fwk_interrupt_set_isr_fault_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_interrupt_set_isr_fault);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void Mockfwk_interrupt_internal_Init(void)
{
  Mockfwk_interrupt_internal_Destroy();
}

void Mockfwk_interrupt_internal_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int fwk_interrupt_set_isr_fault(cmock_fwk_interrupt_func_ptr1 isr)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_interrupt_set_isr_fault);
  cmock_call_instance = (CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_interrupt_set_isr_fault_CallInstance);
  Mock.fwk_interrupt_set_isr_fault_CallInstance = CMock_Guts_MemNext(Mock.fwk_interrupt_set_isr_fault_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_fwk_interrupt_set_isr_fault,CMockString_isr);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_isr, isr, cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fwk_interrupt_set_isr_fault(CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE* cmock_call_instance, cmock_fwk_interrupt_func_ptr1 isr);
void CMockExpectParameters_fwk_interrupt_set_isr_fault(CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE* cmock_call_instance, cmock_fwk_interrupt_func_ptr1 isr)
{
  memcpy((void*)(&cmock_call_instance->Expected_isr), (void*)(&isr),
         sizeof(cmock_fwk_interrupt_func_ptr1[sizeof(isr) == sizeof(cmock_fwk_interrupt_func_ptr1) ? 1 : -1])); /* add cmock_fwk_interrupt_func_ptr1 to :treat_as_array if this causes an error */
}

void fwk_interrupt_set_isr_fault_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE));
  CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_interrupt_set_isr_fault_CallInstance = CMock_Guts_MemChain(Mock.fwk_interrupt_set_isr_fault_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void fwk_interrupt_set_isr_fault_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, cmock_fwk_interrupt_func_ptr1 isr, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE));
  CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_interrupt_set_isr_fault_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_interrupt_set_isr_fault_CallInstance = CMock_Guts_MemChain(Mock.fwk_interrupt_set_isr_fault_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_fwk_interrupt_set_isr_fault(cmock_call_instance, isr);
  cmock_call_instance->ReturnVal = cmock_to_return;
}
