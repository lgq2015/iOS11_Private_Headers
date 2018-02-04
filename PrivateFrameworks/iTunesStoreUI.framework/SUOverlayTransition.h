/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUOverlayTransition : NSObject <NSCoding, NSCopying> {
    double  _duration;
    SUDOMElement * _sourceElement;
    long long  _type;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) SUDOMElement *sourceElement;
@property (nonatomic) long long type;

+ (long long)transitionTypeFromString:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setSourceElement:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sourceElement;
- (long long)type;

@end
