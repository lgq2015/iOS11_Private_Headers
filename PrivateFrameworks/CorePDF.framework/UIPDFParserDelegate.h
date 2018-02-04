/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _p;
    bool  _parserError;
    struct CGPath { } * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool parserError;
@property (readonly) struct CGPath { }*path;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (bool)parserError;
- (struct CGPath { }*)path;

@end
