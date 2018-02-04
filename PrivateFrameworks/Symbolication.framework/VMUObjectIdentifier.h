/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectIdentifier : NSObject {
    unsigned long long  _cfBooleanFalseAddress;
    unsigned long long  _cfBooleanTrueAddress;
    unsigned long long  _cfClassCount;
    VMUClassInfoMap * _cfTypeIDToClassInfo;
    unsigned long long  _coreFoundationCFTypeIsa;
    unsigned long long  _foundationCFTypeIsa;
    bool  _fragileNonPointerIsas;
    NSMapTable * _isaToObjectLabelHandlerMap;
    id /* block */  _isaTranslator;
    NSMapTable * _itemCountToLabelStringUniquingMap;
    id * _labelStringUniquingMaps;
    void * _libSwiftRemoteMirrorHandle;
    NSString * _libSwiftRemoteMirrorPath;
    id /* block */  _memoryReader;
    NSMutableDictionary * _nonobjectClassInfosDict;
    NSHashTable * _objcRuntimeMallocBlocksHash;
    VMUClassInfoMap * _realizedIsaToClassInfo;
    VMUTaskMemoryScanner * _scanner;
    id * _stringTypeDescriptions;
    NSMutableSet * _stringUniquingSet;
    unsigned long long  _swiftClassCount;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _swiftCoreSymbolOwner;
    struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; } * _swiftMirror;
    NSArray * _swiftMirrorMachOSections;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    VMUNonOverlappingRangeArray * _targetProcessVMranges;
    bool  _targetUsesObjc2runtime;
    unsigned int  _task;
    VMUClassInfoMap * _unrealizedClassInfos;
}

@property (nonatomic, readonly) id /* block */ memoryReader;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) NSString *swiftCoreSymbolOwnerPath;
@property (nonatomic, readonly) struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*swiftMirror;

- (void).cxx_destruct;
- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (void*)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (void*)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 avoidSystem:(bool)arg2;
- (void*)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (void)_populateSwiftDebugVariables:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg1;
- (int)_populateSwiftReflectionInfo:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg1;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)_scanner;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })_symbolicator;
- (unsigned short)_targetProcessSwiftReflectionVersion;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 scanner:(id)arg3;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 usingHandlerBlock:(id /* block */)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 usingHandlerBlock:(id /* block */)arg4;
- (id)labelForNSArray:(void*)arg1;
- (id)labelForNSCFDictionary:(void*)arg1;
- (id)labelForNSCFSet:(void*)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(bool)arg2;
- (id)labelForNSConcreteAttributedString:(void*)arg1;
- (id)labelForNSConcreteData:(void*)arg1;
- (id)labelForNSConcreteHashTable:(void*)arg1;
- (id)labelForNSConcreteMutableData:(void*)arg1;
- (id)labelForNSData:(void*)arg1;
- (id)labelForNSDate:(void*)arg1;
- (id)labelForNSDictionary:(void*)arg1;
- (id)labelForNSInlineData:(void*)arg1;
- (id)labelForNSNumber:(void*)arg1;
- (id)labelForNSPathStore2:(void*)arg1;
- (id)labelForNSSet:(void*)arg1;
- (id)labelForNSString:(void*)arg1;
- (id)labelForNSString:(void*)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(bool)arg4;
- (id)labelForNSURL:(void*)arg1;
- (id)labelForNSXPCConnection:(void*)arg1;
- (id)labelForNSXPCInterface:(void*)arg1;
- (id)labelForOSDispatchMach:(void*)arg1;
- (id)labelForOSDispatchQueue:(void*)arg1;
- (id)labelForOSTransaction:(void*)arg1;
- (id)labelForOSXPCConnection:(void*)arg1;
- (id)labelForProtocol:(void*)arg1;
- (id)labelForTaggedPointer:(void*)arg1;
- (id)labelFor__NSMallocBlock__:(void*)arg1;
- (void)loadSwiftReflectionLibrary;
- (id /* block */)memoryReader;
- (id)objcRuntimeMallocBlocksHash;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)osMajorMinorVersionString;
- (id)realizedClasses;
- (id)swiftCoreSymbolOwnerPath;
- (struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)swiftMirror;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(bool)arg3;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

@end
