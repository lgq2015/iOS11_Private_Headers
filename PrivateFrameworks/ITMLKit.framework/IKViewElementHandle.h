/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementHandle : NSObject {
    IKDOMElement * _domElement;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) IKDOMElement *domElement;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)domElement;
- (id)initWithDOMElement:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
