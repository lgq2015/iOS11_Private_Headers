/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureExtractor : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)defaultExtractor;

- (void).cxx_destruct;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)init;
- (id)queue;
- (id)queueType;
- (void)setQueue:(id)arg1;

@end
