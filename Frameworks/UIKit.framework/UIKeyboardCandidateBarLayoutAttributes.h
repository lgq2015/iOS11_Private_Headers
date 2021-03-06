/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {
    bool  _beginsFirstPage;
    bool  _endsLastPage;
}

@property (nonatomic) bool beginsFirstPage;
@property (nonatomic) bool endsLastPage;

- (bool)beginsFirstPage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)endsLastPage;
- (void)setBeginsFirstPage:(bool)arg1;
- (void)setEndsLastPage:(bool)arg1;

@end
