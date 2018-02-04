/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPError : PBCodable <NSSecureCoding, _CPError> {
    double  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSString * _reason;
}

@property (nonatomic) double code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)code;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (bool)requiresQueryId;
- (void)setCode:(double)arg1;
- (void)setDomain:(id)arg1;
- (void)setReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
