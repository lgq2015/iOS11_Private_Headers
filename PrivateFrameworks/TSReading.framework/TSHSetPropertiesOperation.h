/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHSetPropertiesOperation : TSHXmlOperation {
    NSArray * mDeleteProps;
    long long  mHrefDepth;
    bool  mInHref;
    bool  mInProp;
    bool  mInStatus;
    NSDictionary * mNamespacePrefixes;
    long long  mParserDepth;
    NSMutableString * mPath;
    long long  mPropDepth;
    NSDictionary * mProperties;
    NSMutableArray * mResponseProperties;
}

- (void)dealloc;
- (id)description;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 properties:(id)arg3 deleteProperties:(id)arg4 namespacePrefixes:(id)arg5 delegate:(id)arg6;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 properties:(id)arg5 deleteProperties:(id)arg6 namespacePrefixes:(id)arg7 delegate:(id)arg8;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)request;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end
