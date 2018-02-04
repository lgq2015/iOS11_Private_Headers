/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKActivatedElementInfo : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _ID;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _URL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct RefPtr<WebKit::ShareableBitmap> { 
        struct ShareableBitmap {} *m_ptr; 
    }  _image;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionLocation;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _title;
    long long  _type;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    }  _uiImage;
    struct RetainPtr<NSDictionary> { 
        void *m_ptr; 
    }  _userInfo;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _interactionLocation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)activatedElementInfoWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ID;
- (id)URL;
- (id)_initWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 image:(struct ShareableBitmap { unsigned int x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; unsigned int x3; unsigned int x4; struct RefPtr<WebKit::SharedMemory> { struct SharedMemory {} *x_5_1_1; } x5; void *x6; }*)arg7;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 image:(struct ShareableBitmap { unsigned int x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; unsigned int x3; unsigned int x4; struct RefPtr<WebKit::SharedMemory> { struct SharedMemory {} *x_5_1_1; } x5; void *x6; }*)arg7 userInfo:(id)arg8;
- (struct CGPoint { double x1; double x2; })_interactionLocation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)image;
- (id)title;
- (long long)type;
- (id)userInfo;

@end
