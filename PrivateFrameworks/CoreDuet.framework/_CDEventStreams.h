/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDEventStreams : NSObject {
    NSDictionary * _allEventStreams;
    NSDictionary * _allKBEventStreams;
}

@property (nonatomic, readonly) NSDictionary *allEventStreams;

+ (id)ephemeralitySchedule;
+ (id)eventStreamForName:(id)arg1;
+ (id)eventStreamPropertiesForKBName:(id)arg1;
+ (id)eventStreamPropertiesForName:(id)arg1;
+ (id)privacyPolicy;
+ (id)rateLimitPolicy;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allEventStreams;

@end
