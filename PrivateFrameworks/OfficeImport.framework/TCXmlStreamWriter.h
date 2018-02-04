/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlStreamWriter : NSObject {
    NSMutableSet * mAddedIds;
    bool  mContentAdded;
    unsigned int  mCurrentDepth;
    struct _xmlTextWriter { } * mStreamAPI;
}

+ (bool)cleanUpXmlTextWriter:(struct _xmlTextWriter { }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(bool)arg3;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithContext:(id)arg1;
+ (bool)endElementInStream:(struct _xmlTextWriter { }*)arg1;
+ (void)resetElementIds;
+ (bool)startElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (bool)startPlainElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeAnchorTargetToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (bool)writeDtdToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (bool)writeNamespaceToStream:(struct _xmlTextWriter { }*)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (bool)writePlainAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3;
+ (bool)writeStringToStream:(struct _xmlTextWriter { }*)arg1 text:(id)arg2;

- (bool)contentAdded;
- (void)dealloc;
- (bool)endElement;
- (bool)endElementsToBase;
- (id)initWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (bool)startPlainElement:(id)arg1;
- (struct _xmlTextWriter { }*)textWriter;
- (bool)writeAnchorTarget:(id)arg1;
- (bool)writeAttribute:(id)arg1 boolContent:(bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (bool)writeElementId:(id)arg1;
- (bool)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (bool)writePlainAttribute:(id)arg1 boolContent:(bool)arg2;
- (bool)writePlainAttribute:(id)arg1 content:(id)arg2;
- (bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (bool)writeString:(id)arg1;

@end
