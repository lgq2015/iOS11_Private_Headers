/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASymbolSourceInfo : NSObject <PASerializable> {
    unsigned int  _columnNumber;
    NSString * _fileName;
    unsigned long long  _length;
    unsigned int  _lineNumber;
    unsigned long long  _offsetIntoSymbolOwner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long offsetIntoSymbolOwner;
@property (readonly) unsigned int sourceFileColumnNumber;
@property (readonly) unsigned int sourceFileLineNumber;
@property (readonly) NSString *sourceFileName;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)_initWithSerializedSymbolSourceInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned int x5; unsigned int x6; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (id)initWithOffsetIntoSymbolOwner:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3 lineNumber:(unsigned int)arg4 columnNumber:(unsigned int)arg5;
- (bool)isEmptySourceInfo;
- (unsigned long long)length;
- (unsigned long long)offsetIntoSymbolOwner;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)sourceFileColumnNumber;
- (unsigned int)sourceFileLineNumber;
- (id)sourceFileName;

@end
