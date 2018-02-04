/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFPageNumberIndicator : UIView {
    struct RetainPtr<_UIBackdropView> { 
        void *m_ptr; 
    }  _backdropView;
    unsigned int  _currentPageNumber;
    bool  _hasValidPageCountAndCurrentPage;
    struct RetainPtr<UILabel> { 
        void *m_ptr; 
    }  _label;
    unsigned int  _pageCount;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _timer;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_makeRoundedCorners;
- (void)_updateLabel;
- (unsigned int)currentPageNumber;
- (void)dealloc;
- (void)hide;
- (void)hide:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (unsigned int)pageCount;
- (void)setCurrentPageNumber:(unsigned int)arg1;
- (void)setPageCount:(unsigned int)arg1;
- (void)show;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
