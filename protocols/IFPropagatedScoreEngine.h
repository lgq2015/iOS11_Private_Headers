/* made by EzioChiu.
 */

@protocol IFPropagatedScoreEngine <NSObject>

@required

- (double)propagatedScoreForSensedScore:(double)arg1 destination:(IFTopic *)arg2 distance:(unsigned long long)arg3;

@end
