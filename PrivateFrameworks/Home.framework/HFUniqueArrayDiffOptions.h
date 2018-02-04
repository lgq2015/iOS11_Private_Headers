/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUniqueArrayDiffOptions : NSObject {
    bool  _allowMoves;
    id /* block */  _changeComparator;
    id /* block */  _equalComparator;
    id /* block */  _hashGenerator;
}

@property (nonatomic) bool allowMoves;
@property (nonatomic, copy) id /* block */ changeComparator;
@property (nonatomic, copy) id /* block */ equalComparator;
@property (nonatomic, copy) id /* block */ hashGenerator;

- (void).cxx_destruct;
- (bool)allowMoves;
- (id /* block */)changeComparator;
- (id /* block */)equalComparator;
- (id /* block */)hashGenerator;
- (id)init;
- (void)setAllowMoves:(bool)arg1;
- (void)setChangeComparator:(id /* block */)arg1;
- (void)setEqualComparator:(id /* block */)arg1;
- (void)setHashGenerator:(id /* block */)arg1;

@end
