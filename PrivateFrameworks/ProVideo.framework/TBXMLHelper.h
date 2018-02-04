/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TBXMLHelper : NSObject <NSXMLParserDelegate> {
    int  _depth;
    bool  _interested;
    NSString * _key;
    NSXMLParser * _parser;
    NSMutableDictionary * _settings;
    bool  _successfullyEndedParsing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *sceneSettings;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)parse;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)sceneSettings;

@end
