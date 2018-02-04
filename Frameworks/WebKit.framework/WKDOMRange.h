/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range> { 
        struct Range {} *m_ptr; 
    }  _impl;
}

@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (readonly) bool isCollapsed;
@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (readonly, copy) NSString *text;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleRangeHandle { }*)_copyBundleRangeHandleRef;
- (id)_initWithImpl:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (void)collapse:(bool)arg1;
- (void)dealloc;
- (id)endContainer;
- (long long)endOffset;
- (id)initWithDocument:(id)arg1;
- (bool)isCollapsed;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (id)startContainer;
- (long long)startOffset;
- (id)text;
- (id)textRects;

@end
