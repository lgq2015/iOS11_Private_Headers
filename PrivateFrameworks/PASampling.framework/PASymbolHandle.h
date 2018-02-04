/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASymbolHandle : NSObject <PASerializable> {
    PASymbolOwner * _owner;
    PASymbol * _symbol;
    unsigned long long  _symbolOwnerStartAddressInTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasSymbol;
@property (readonly) bool hasSymbolOwner;
@property (readonly) bool hasSymbolOwnerStartAddressInTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long symbolLength;
@property (readonly) NSString *symbolName;
@property (readonly) NSString *symbolOwnerBinaryVersion;
@property (readonly) NSString *symbolOwnerBundleIdentifier;
@property (readonly) NSString *symbolOwnerBundleShortVersion;
@property (readonly) NSString *symbolOwnerBundleVersion;
@property (readonly) bool symbolOwnerIsTextExecSegment;
@property (readonly) NSString *symbolOwnerName;
@property (retain) NSString *symbolOwnerPath;
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;
@property (readonly) unsigned long long symbolOwnerTextSegmentLength;
@property (readonly) NSUUID *symbolOwnerUUID;
@property (readonly) unsigned long long symbolStartAddressInTask;

+ (id)classDictionaryKey;
+ (id)getEmptySymbolHandle;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (id)_initAsEmptyHandle;
- (id)_sourceInformationForAddress:(unsigned long long)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)addToPersistentCache;
- (long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2;
- (id)debugDescription;
- (id)debugDescriptionForAddress:(unsigned long long)arg1;
- (bool)hasSourceInformationForAddress:(unsigned long long)arg1;
- (bool)hasSymbol;
- (bool)hasSymbolOwner;
- (bool)hasSymbolOwnerStartAddressInTask;
- (id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setSymbolOwnerPath:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg1;
- (id)sourceFileNameForAddress:(unsigned long long)arg1;
- (unsigned long long)sourceLengthForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg1;
- (unsigned long long)sourceStartAddressInTaskForAddress:(unsigned long long)arg1;
- (unsigned long long)symbolLength;
- (id)symbolName;
- (id)symbolOwnerBinaryVersion;
- (id)symbolOwnerBundleIdentifier;
- (id)symbolOwnerBundleShortVersion;
- (id)symbolOwnerBundleVersion;
- (bool)symbolOwnerIsTextExecSegment;
- (id)symbolOwnerName;
- (id)symbolOwnerPath;
- (unsigned long long)symbolOwnerStartAddressInTask;
- (unsigned long long)symbolOwnerTextSegmentLength;
- (id)symbolOwnerUUID;
- (unsigned long long)symbolStartAddressInTask;

@end
