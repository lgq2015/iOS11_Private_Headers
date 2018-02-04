/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> > { 
        struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo> >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >::KeyValuePairTraits, WTF::HashTraits<SEL *> > { 
            struct KeyValuePair<SEL *, MethodInfo> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _methods;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) Protocol *protocol;

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Vector<WTF::HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> >, 0, WTF::CrashOnOverflow, 16> { struct HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> > {} *x1; unsigned int x2; unsigned int x3; }*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1;
- (const struct Vector<WTF::HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> >, 0, WTF::CrashOnOverflow, 16> { struct HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> > {} *x1; unsigned int x2; unsigned int x3; }*)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)debugDescription;
- (id)identifier;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (id)protocol;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

@end
