/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying> {
    NSString * _feedback;
    NSMutableArray * _grades;
}

@property (nonatomic, retain) NSString *feedback;
@property (nonatomic, retain) NSMutableArray *grades;
@property (nonatomic, readonly) bool hasFeedback;

+ (Class)gradesType;

- (void).cxx_destruct;
- (void)addGrades:(id)arg1;
- (void)clearGrades;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedback;
- (id)grades;
- (id)gradesAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradesCount;
- (bool)hasFeedback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setGrades:(id)arg1;
- (void)writeTo:(id)arg1;

@end
