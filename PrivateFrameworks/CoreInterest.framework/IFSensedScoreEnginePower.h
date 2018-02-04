/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFSensedScoreEnginePower : NSObject <IFSensedScoreEngine>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)sensedScoreForTopic:(id)arg1 directScore:(double)arg2;

@end
