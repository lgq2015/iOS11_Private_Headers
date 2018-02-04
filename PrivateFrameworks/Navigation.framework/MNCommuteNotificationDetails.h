/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteNotificationDetails : PBCodable <NSCopying> {
    NSString * _commuteDetailsIdentifier;
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int score : 1; 
    }  _has;
    NSString * _message;
    int  _score;
    NSString * _title;
}

@property (nonatomic, retain) NSString *commuteDetailsIdentifier;
@property (nonatomic) double expirationDate;
@property (nonatomic, readonly) bool hasCommuteDetailsIdentifier;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int score;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)commuteDetailsIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasCommuteDetailsIdentifier;
- (bool)hasExpirationDate;
- (bool)hasMessage;
- (bool)hasScore;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (int)score;
- (void)setCommuteDetailsIdentifier:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setScore:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
