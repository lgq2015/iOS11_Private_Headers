/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBContactImage : PBCodable <NSSecureCoding, _SFPBContactImage> {
    NSString * _contactIdentifier;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContactIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasContactIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
