/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBDate : PBCodable <NSSecureCoding, _SFPBDate> {
    struct { 
        unsigned int secondsSince1970 : 1; 
    }  _has;
    double  _secondsSince1970;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSecondsSince1970;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double secondsSince1970;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (bool)hasSecondsSince1970;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)secondsSince1970;
- (void)setSecondsSince1970:(double)arg1;
- (void)writeTo:(id)arg1;

@end
