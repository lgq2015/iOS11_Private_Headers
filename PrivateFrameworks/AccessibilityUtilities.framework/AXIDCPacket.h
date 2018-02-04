/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIDCPacket : NSObject {
    NSMutableData * _data;
    unsigned long long  _totalLength;
}

@property (nonatomic, retain) NSMutableData *data;

+ (struct { short x1; int x2; })headerFromData:(id)arg1;
+ (id)packetDataWithPayload:(id)arg1;
+ (id)packetWithHeader:(struct { short x1; int x2; })arg1;

- (void).cxx_destruct;
- (id)appendData:(id)arg1;
- (id)data;
- (id)dataPayload;
- (id)initWithHeader:(struct { short x1; int x2; })arg1;
- (unsigned long long)missingLength;
- (id)objectPayload;
- (void)setData:(id)arg1;

@end
