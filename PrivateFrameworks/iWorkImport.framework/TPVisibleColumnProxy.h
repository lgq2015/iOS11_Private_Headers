/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {
    <TSWPFlowInfo> * _flowInfo;
    TPPageController * _pageController;
    unsigned long long  _pageIndex;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 flowInfo:(id)arg3;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (id)p_targetFirstHint;
- (id)p_targetLastHint;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;

@end
