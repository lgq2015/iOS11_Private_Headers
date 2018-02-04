/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyConsumableInnerTextNode, MFMessageBodyTreeNode> {
    NSMutableArray * _childNodes;
    unsigned long long  _endLocation;
    NSString * _htmlString;
    _MFParsedHTMLNode * _nextSibling;
    _MFParsedHTMLNode * _parentNode;
    unsigned long long  _startLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endLocation;
@property (nonatomic, readonly) _MFParsedHTMLNode *firstChild;
@property (nonatomic, readonly) bool hasChildNodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *htmlString;
@property (nonatomic, readonly) _MFParsedHTMLNode *lastChild;
@property (nonatomic) _MFParsedHTMLNode *nextSibling;
@property (nonatomic) _MFParsedHTMLNode *parentNode;
@property (nonatomic) unsigned long long startLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tagName;

- (void)addRecursiveDescriptionWithLevel:(unsigned long long)arg1 toString:(id)arg2;
- (void)appendChild:(id)arg1;
- (void)collectDescendanceIntoArray:(id)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (unsigned long long)endLocation;
- (id)firstChild;
- (bool)hasChildNodes;
- (id)htmlString;
- (id)init;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)recursiveDescription;
- (void)setEndLocation:(unsigned long long)arg1;
- (void)setHtmlString:(id)arg1;
- (void)setNextSibling:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setStartLocation:(unsigned long long)arg1;
- (unsigned long long)startLocation;
- (id)tagName;

@end
