/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBValueMetadata : PBCodable <NSCopying> {
    NSString * _canonicalValue;
    bool  _confirmed;
    struct { 
        unsigned int confirmed : 1; 
    }  _has;
    NSString * _input;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _requiredEntitlements;
    NSString * _source;
    NSString * _sourceAppBundleIdentifier;
    PBUnknownFields * _unknownFields;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *canonicalValue;
@property (nonatomic) bool confirmed;
@property (nonatomic, readonly) bool hasCanonicalValue;
@property (nonatomic) bool hasConfirmed;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasSourceAppBundleIdentifier;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *input;
@property (nonatomic, readonly) int*requiredEntitlements;
@property (nonatomic, readonly) unsigned long long requiredEntitlementsCount;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uuid;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (id)canonicalValue;
- (void)clearRequiredEntitlements;
- (bool)confirmed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCanonicalValue;
- (bool)hasConfirmed;
- (bool)hasInput;
- (bool)hasSource;
- (bool)hasSourceAppBundleIdentifier;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)input;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)requiredEntitlements;
- (id)requiredEntitlementsAsString:(int)arg1;
- (unsigned long long)requiredEntitlementsCount;
- (void)setCanonicalValue:(id)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSource:(id)arg1;
- (void)setSourceAppBundleIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)source;
- (id)sourceAppBundleIdentifier;
- (id)unknownFields;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
