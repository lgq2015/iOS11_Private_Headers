/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFPropagatedScoreEngineAttenuation : NSObject <IFPropagatedScoreEngine>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)propagatedScoreForSensedScore:(double)arg1 destination:(id)arg2 distance:(unsigned long long)arg3;

@end
