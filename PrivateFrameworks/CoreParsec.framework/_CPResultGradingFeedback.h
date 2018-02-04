/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultGradingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultGradingFeedback> {
    int  _grade;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int grade : 1; 
    }  _has;
    _CPSearchResultForFeedback * _result;
    NSString * _textFeedback;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) int grade;
@property (nonatomic, readonly) bool hasGrade;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic, readonly) bool hasTextFeedback;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textFeedback;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)grade;
- (bool)hasGrade;
- (bool)hasResult;
- (bool)hasTextFeedback;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)result;
- (void)setGrade:(int)arg1;
- (void)setResult:(id)arg1;
- (void)setTextFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)textFeedback;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
