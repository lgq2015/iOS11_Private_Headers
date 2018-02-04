/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARTopicScore : NSObject {
    double  _score;
    unsigned long long  _topic;
}

@property (nonatomic) double score;
@property (nonatomic) unsigned long long topic;

+ (id)responseFromJSON:(id)arg1;
+ (id)topicScoreForTopic:(unsigned long long)arg1 score:(double)arg2;

- (id)initWithTopicScore:(unsigned long long)arg1 score:(double)arg2;
- (double)score;
- (void)setScore:(double)arg1;
- (void)setTopic:(unsigned long long)arg1;
- (unsigned long long)topic;

@end
