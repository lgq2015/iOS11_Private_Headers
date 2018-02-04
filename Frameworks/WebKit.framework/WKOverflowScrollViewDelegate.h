/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    bool  _inUserInteraction;
    struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct unique_ptr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16>, std::__1::default_delete<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> > > { struct __compressed_pair<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> *, std::__1::default_delete<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> > > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> {} *x_1_2_1; } x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatSize { float x_11_1_1; float x_11_1_2; } x11; struct FloatPoint { float x_12_1_1; float x_12_1_2; } x12; struct IntPoint { int x_13_1_1; int x_13_1_2; } x13; struct ScrollSnapOffsetsInfo<float> { struct Vector<float, 0, WTF::CrashOnOverflow, 16> { float *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct Vector<float, 0, WTF::CrashOnOverflow, 16> { float *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct Vector<WebCore::ScrollOffsetRange<float>, 0, WTF::CrashOnOverflow, 16> { struct ScrollOffsetRange<float> {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct Vector<WebCore::ScrollOffsetRange<float>, 0, WTF::CrashOnOverflow, 16> { struct ScrollOffsetRange<float> {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; } x14; } * _scrollingTreeNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isInUserInteraction, nonatomic) bool inUserInteraction;
@property (readonly) Class superclass;

- (bool)_isInUserInteraction;
- (id)initWithScrollingTreeNode:(struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct unique_ptr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16>, std::__1::default_delete<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> > > { struct __compressed_pair<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> *, std::__1::default_delete<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> > > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow, 16> {} *x_1_2_1; } x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatSize { float x_11_1_1; float x_11_1_2; } x11; struct FloatPoint { float x_12_1_1; float x_12_1_2; } x12; struct IntPoint { int x_13_1_1; int x_13_1_2; } x13; struct ScrollSnapOffsetsInfo<float> { struct Vector<float, 0, WTF::CrashOnOverflow, 16> { float *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct Vector<float, 0, WTF::CrashOnOverflow, 16> { float *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct Vector<WebCore::ScrollOffsetRange<float>, 0, WTF::CrashOnOverflow, 16> { struct ScrollOffsetRange<float> {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct Vector<WebCore::ScrollOffsetRange<float>, 0, WTF::CrashOnOverflow, 16> { struct ScrollOffsetRange<float> {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; } x14; }*)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setInUserInteraction:(bool)arg1;

@end
