/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageRenderJob : NSObject {
    SEL  _callback;
    UIImage * _image;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UIPDFPageRenderOperation * _operation;
    UIPDFPage * _page;
    unsigned long long  _pageIndex;
    long long  _priority;
    bool  _releaseWhenDone;
    bool  _sendPending;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    id  _target;
    id  _userData;
}

@property (readonly, retain) UIImage *image;
@property UIPDFPageRenderOperation *operation;
@property (readonly) unsigned long long pageIndex;
@property (readonly) long long priority;
@property bool releaseWhenDone;
@property (readonly) struct CGSize { double x1; double x2; } size;

- (void)cancel;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)dealloc;
- (bool)hasPage;
- (id)image;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 queuePriority:(long long)arg3;
- (id)operation;
- (unsigned long long)pageIndex;
- (long long)priority;
- (void)releaseOperation;
- (bool)releaseWhenDone;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)setOperation:(id)arg1;
- (void)setReleaseWhenDone:(bool)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (struct CGSize { double x1; double x2; })size;

@end
