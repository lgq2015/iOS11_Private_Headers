/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMAttributedStringRendererOptions : NSObject {
    NSArray * _exclusionPaths;
    double  _hyphenationFactor;
    long long  _lineBreakMode;
    double  _lineFragmentPadding;
    unsigned long long  _maximumNumberOfLines;
}

@property (nonatomic, readonly, copy) NSArray *exclusionPaths;
@property (nonatomic, readonly) double hyphenationFactor;
@property (nonatomic, readonly) long long lineBreakMode;
@property (nonatomic, readonly) double lineFragmentPadding;
@property (nonatomic, readonly) unsigned long long maximumNumberOfLines;

- (void).cxx_destruct;
- (id)exclusionPaths;
- (double)hyphenationFactor;
- (id)init;
- (id)initWithLineBreakMode:(long long)arg1 lineFragmentPadding:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 hyphenationFactor:(double)arg4 exclusionPaths:(id)arg5;
- (long long)lineBreakMode;
- (double)lineFragmentPadding;
- (unsigned long long)maximumNumberOfLines;

@end
