/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionEvent : NSObject <NSSecureCoding> {
    NSData * _archivedTag;
    unsigned long long  _eventMask;
    id  _tag;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long eventMask;
@property (nonatomic, readonly) id tag;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedTag;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventMask;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 archivedTag:(id)arg2 eventMask:(unsigned long long)arg3;
- (id)tag;
- (double)timestamp;
- (void)updateWithConfig:(id)arg1;
- (void)validateMask;

@end
