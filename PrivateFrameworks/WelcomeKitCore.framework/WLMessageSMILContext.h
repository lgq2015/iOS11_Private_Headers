/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessageSMILContext : NSObject <NSXMLParserDelegate> {
    NSString * _characters;
    bool  _inBody;
    bool  _inPar;
    NSArray * _parts;
}

@property (nonatomic, readonly) NSString *characters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *parts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)characters;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)parts;

@end
