/* Automatically generated by
	CCodeGenerator VMMaker.oscog-eem.1331 uuid: 2da6f9fc-7921-4c8b-8c78-dd47f9ddd76e
 */


/*** Function Prototypes ***/


#if !PRODUCTION && defined(PlatformNoDbgRegParms)
# define NoDbgRegParms PlatformNoDbgRegParms
#endif

#if !defined(NoDbgRegParms)
# define NoDbgRegParms /*empty*/
#endif



#if !defined(NeverInline)
# define NeverInline /*empty*/
#endif

sqInt abortOffset(void);
void addCogMethodsToHeapMap(void);
sqInt bytecodePCForstartBcpcin(sqInt mcpc, sqInt startbcpc, CogBlockMethod *cogMethod);
void callCogCodePopReceiver(void);
void callCogCodePopReceiverAndClassRegs(void);
sqInt ceCPICMissreceiver(CogMethod *cPIC, sqInt receiver);
sqInt ceSICMiss(sqInt receiver);
void checkAssertsEnabledInCogit(void);
sqInt checkIntegrityOfObjectReferencesInCode(sqInt gcModes);
char * codeEntryFor(char *address);
char * codeEntryNameFor(char *address);
sqInt cogCodeBase(void);
sqInt cogCodeConstituents(void);
void cogitPostGCAction(sqInt gcMode);
sqInt cogMethodDoesntLookKosher(CogMethod *cogMethod);
CogMethod * cogMNUPICSelectorreceivermethodOperandnumArgs(sqInt selector, sqInt rcvr, sqInt methodOperand, sqInt numArgs);
CogMethod * cogselector(sqInt aMethodObj, sqInt aSelectorOop);
void compactCogCompiledCode(void);
void enterCogCodePopReceiver(void);
CogBlockMethod * findMethodForStartBcpcinHomeMethod(sqInt startbcpc, CogMethod *cogMethod);
void followForwardedLiteralsIn(CogMethod *cogMethod);
void followForwardedMethods(void);
void freeUnmarkedMachineCode(void);
void initializeCodeZoneFromupTo(sqInt startAddress, sqInt endAddress);
sqInt isPCWithinMethodZone(void *address);
sqInt isSendReturnPC(sqInt retpc);
void linkNSSendCacheclassTagenclosingObjecttargetcaller(NSSendCache *nsSendCache, sqInt classTag, sqInt enclosingObject, CogMethod *targetMethod, CogMethod *callingMethod);
void linkSendAtintooffsetreceiver(sqInt callSiteReturnAddress, CogMethod *sendingMethod, CogMethod *targetMethod, sqInt theEntryOffset, sqInt receiver);
void mapObjectReferencesInMachineCode(sqInt gcMode);
void markAndTraceMachineCodeOfMarkedMethods(void);
void markMethodAndReferents(CogBlockMethod *aCogMethod);
usqInt maxCogMethodAddress(void);
usqInt mcPCForBackwardBranchstartBcpcin(sqInt bcpc, sqInt startbcpc, CogBlockMethod *cogMethod);
sqInt minCogMethodAddress(void);
sqInt mnuOffset(void);
sqInt patchToOpenPICFornumArgsreceiver(sqInt selector, sqInt numArgs, sqInt receiver);
sqInt pcisWithinMethod(char *address, CogMethod *cogMethod);
void printCogMethodFor(void *address);
void printTrampolineTable(void);
sqInt recordPrimTraceFunc(void);
void setBreakMethod(sqInt anObj);
void setPostCompileHook(void (*aFunction)(CogMethod *, void *));
void setSelectorOfto(CogMethod *cogMethod, sqInt aSelectorOop);
sqInt traceLinkedSendOffset(void);
void unlinkAllSends(void);
void unlinkSendsLinkedForInvalidClasses(void);
void unlinkSendsOfisMNUSelector(sqInt selector, sqInt isMNUSelector);
void unlinkSendsToFree(void);
void unlinkSendsToandFreeIf(sqInt targetMethodObject, sqInt freeIfTrue);
void addAllToYoungReferrers(void);
void freeMethod(CogMethod *cogMethod);
CogMethod * methodFor(void *address);
sqInt numMethodsOfType(sqInt cogMethodType);
void printCogMethods(void);
void printCogMethodsOfType(sqInt cmType);
void printCogMethodsWithMethod(sqInt methodOop);
void printCogMethodsWithPrimitive(sqInt primIdx);
void printCogMethodsWithSelector(sqInt selectorOop);
void printCogYoungReferrers(void);
void printOpenPICList(void);
char * whereIsMaybeCodeThing(sqInt anOop);
sqInt numRegArgs(void);
sqInt genQuickReturnConst(void);
sqInt genQuickReturnInstVar(void);
sqInt genQuickReturnSelf(void);
void recordCallOffsetInof(CogMethod *cogMethod, void *callLabelArg);
void rewritePrimInvocationInto(CogMethod *cogMethod, void (*primFunctionPointer)(void));
void voidCogCompiledCode(void);
void callCogCodePopReceiverArg0Regs(void);
void callCogCodePopReceiverArg1Arg0Regs(void);


/*** Global Variables ***/
VM_EXPORT sqInt blockNoContextSwitchOffset;
VM_EXPORT sqInt breakPC;
VM_EXPORT void * CFramePointer;
VM_EXPORT void * CStackPointer;
VM_EXPORT sqInt ceBaseFrameReturnTrampoline;
VM_EXPORT void (*ceCall0ArgsPIC)(void);
VM_EXPORT void (*ceCall1ArgsPIC)(void);
VM_EXPORT void (*ceCall2ArgsPIC)(void);
VM_EXPORT void (*ceCallCogCodePopReceiverAndClassRegs)(void);
VM_EXPORT void (*ceCallCogCodePopReceiverArg0Regs)(void);
VM_EXPORT void (*ceCallCogCodePopReceiverArg1Arg0Regs)(void);
VM_EXPORT void (*ceCallCogCodePopReceiverReg)(void);
VM_EXPORT sqInt ceCannotResumeTrampoline;
VM_EXPORT void (*ceCaptureCStackPointers)(void);
VM_EXPORT sqInt ceCheckForInterruptTrampoline;
VM_EXPORT void (*ceEnterCogCodePopReceiverReg)(void);
VM_EXPORT unsigned long (*ceGetSP)(void);
VM_EXPORT sqInt ceReturnToInterpreterTrampoline;
VM_EXPORT unsigned long (*ceTryLockVMOwner)(void);
VM_EXPORT void (*ceUnlockVMOwner)(void);
VM_EXPORT sqInt cFramePointerInUse;
VM_EXPORT sqInt cmEntryOffset;
VM_EXPORT sqInt cmNoCheckEntryOffset;
VM_EXPORT unsigned long debugPrimCallStackOffset;
VM_EXPORT sqInt missOffset;
VM_EXPORT void (*realCECallCogCodePopReceiverAndClassRegs)(void);
VM_EXPORT void (*realCECallCogCodePopReceiverArg0Regs)(void);
VM_EXPORT void (*realCECallCogCodePopReceiverArg1Arg0Regs)(void);
VM_EXPORT void (*realCECallCogCodePopReceiverReg)(void);
VM_EXPORT void (*realCEEnterCogCodePopReceiverReg)(void);
VM_EXPORT int traceFlags ;
VM_EXPORT sqInt traceStores;


/*** Macros ***/
#define blockAlignment(self) 8
#define breakOnImplicitReceiver() (traceFlags & 64)
#define ceBaseFrameReturnPC() ceBaseFrameReturnTrampoline
#define ceCannotResumePC() ((usqInt)ceCannotResumeTrampoline)
#define ceReturnToInterpreterPC() ((usqInt)ceReturnToInterpreterTrampoline)
#define compileSendTrace() (traceFlags & 2)
#define entryOffset() cmEntryOffset
#define getCFramePointer() CFramePointer
#define getCStackPointer() CStackPointer
#define interpretOffset() missOffset
#define noCheckEntryOffset() cmNoCheckEntryOffset
#define noContextSwitchBlockEntryOffset() blockNoContextSwitchOffset
#define printOnTrace() (traceFlags & 1)
#define recordBlockTrace() (traceFlags & 4)
#define recordEventTrace() (traceFlags & 16)
#define recordOverflowTrace() (traceFlags & 32)
#define recordPrimTrace() (traceFlags & 8)
#define recordSendTrace() (traceFlags & 2)
#define setCFramePointer(theFP) (CFramePointer = (void *)(theFP))
#define setCStackPointer(theSP) (CStackPointer = (void *)(theSP))
#define tryLockVMOwner() (ceTryLockVMOwner() != 0)
#define unlockVMOwner() ceUnlockVMOwner()

