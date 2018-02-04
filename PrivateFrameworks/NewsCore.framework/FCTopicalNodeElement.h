/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopicalNodeElement : NSObject <NSCopying> {
    NSString * _identifier;
    double  _score;
    NSSet * _topics;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic, retain) NSSet *topics;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)score;
- (void)setIdentifier:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
