/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FMClip : NSObject {
    long long  _duration;
    long long  _fadeInLength;
    long long  _fadeOutLength;
    long long  _offset;
    long long  _position;
    NSURL * _url;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long fadeInLength;
@property (nonatomic) long long fadeOutLength;
@property (nonatomic) long long offset;
@property (nonatomic) long long position;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)duration;
- (long long)fadeInLength;
- (long long)fadeOutLength;
- (long long)offset;
- (long long)position;
- (void)setDuration:(long long)arg1;
- (void)setFadeInLength:(long long)arg1;
- (void)setFadeOutLength:(long long)arg1;
- (void)setOffset:(long long)arg1;
- (void)setPosition:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
