/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReviewProvider : ISDataProvider <NSCopying> {
    bool  _backgroundReview;
}

@property (getter=isBackgroundReview) bool backgroundReview;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isBackgroundReview;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (void)setBackgroundReview:(bool)arg1;

@end
