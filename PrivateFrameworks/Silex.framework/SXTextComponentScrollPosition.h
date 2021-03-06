/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {
    long long  _characterIndex;
    double  _relativeTextOffset;
}

@property (nonatomic) long long characterIndex;
@property (nonatomic) double relativeTextOffset;

- (long long)characterIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)relativeTextOffset;
- (void)setCharacterIndex:(long long)arg1;
- (void)setRelativeTextOffset:(double)arg1;

@end
