/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventData : NSObject {
    struct _AXEventDataStorage { 
        long long eventSenderIdentifier; 
    }  _storage;
}

@property (nonatomic, readonly) char *dataBytes;
@property (nonatomic, readonly) long long dataLength;
@property (nonatomic, readonly) long long eventSenderIdentifier;
@property (nonatomic, readonly) bool wasPostedByAccessibility;

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;

- (char *)dataBytes;
- (long long)dataLength;
- (id)description;
- (long long)eventSenderIdentifier;
- (id)init;
- (bool)wasPostedByAccessibility;

@end
