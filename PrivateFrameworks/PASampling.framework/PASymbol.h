/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASymbol : NSObject <PASerializable> {
    unsigned long long  _length;
    NSString * _name;
    unsigned long long  _offsetInOwner;
    NSMutableArray * _sourceInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEmptySymbol;
@property unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offsetIntoOwner;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (id)_initWithSerializedSymbol:(const struct { unsigned long long x1; long long x2; long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addSourceInfo:(id)arg1;
- (long long)compareInfoRichnessToSymbol:(id)arg1;
- (long long)compareToSymbol:(id)arg1;
- (bool)containsOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (void)copySourceInfoFromSymbol:(id)arg1;
- (id)debugDescription;
- (id)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg1;
- (bool)hasAnySourceInfo;
- (id)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg1;
- (id)initWithCSSymbolRef:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithName:(id)arg1 length:(unsigned long long)arg2 offsetInOwner:(unsigned long long)arg3;
- (bool)isEmptySymbol;
- (unsigned long long)length;
- (id)name;
- (unsigned long long)offsetIntoOwner;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setLength:(unsigned long long)arg1;
- (void)setOffsetIntoOwner:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg1;

@end
