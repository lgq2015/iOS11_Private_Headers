/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKStars : TLKFormattedTextItem {
    double  _starRating;
}

@property double starRating;

- (id)observableProperties;
- (void)setStarRating:(double)arg1;
- (double)starRating;

@end
