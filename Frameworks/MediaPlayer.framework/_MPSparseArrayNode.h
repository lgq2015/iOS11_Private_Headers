/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPSparseArrayNode : NSObject <NSSecureCoding> {
    id  _object;
    unsigned long long  _relativeOffset;
}

@property (nonatomic, retain) id object;
@property (nonatomic) unsigned long long relativeOffset;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeOffset:(unsigned long long)arg1 object:(id)arg2;
- (id)object;
- (unsigned long long)relativeOffset;
- (void)setObject:(id)arg1;
- (void)setRelativeOffset:(unsigned long long)arg1;

@end
