// Generated from /Users/ramiz/Documents/GitHub/CPU_Emulator/Assembler/Grammar/Rex32.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class Rex32Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15;
	public static final int
		RULE_register_instr = 0;
	private static String[] makeRuleNames() {
		return new String[] {
			"register_instr"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'ADD'", "'SUB'", "'AND'", "'OR'", "'XOR'", "'SHL'", "'SHR'", "'SAR'", 
			"'MUL'", "'DIV'", "'MOD'", "'CMP'", "'MOV'", "'NOT'", "'NEG'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Rex32.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public Rex32Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Register_instrContext extends ParserRuleContext {
		public Register_instrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_register_instr; }
	 
		public Register_instrContext() { }
		public void copyFrom(Register_instrContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_XORContext extends Register_instrContext {
		public Reg_XORContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_ORContext extends Register_instrContext {
		public Reg_ORContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_SHRContext extends Register_instrContext {
		public Reg_SHRContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_SUBContext extends Register_instrContext {
		public Reg_SUBContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_ADDContext extends Register_instrContext {
		public Reg_ADDContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_MODContext extends Register_instrContext {
		public Reg_MODContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_SARContext extends Register_instrContext {
		public Reg_SARContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_MulContext extends Register_instrContext {
		public Reg_MulContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_CMPContext extends Register_instrContext {
		public Reg_CMPContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_NEGContext extends Register_instrContext {
		public Reg_NEGContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_DIVContext extends Register_instrContext {
		public Reg_DIVContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_NOTContext extends Register_instrContext {
		public Reg_NOTContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_MOVContext extends Register_instrContext {
		public Reg_MOVContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_ANDContext extends Register_instrContext {
		public Reg_ANDContext(Register_instrContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Reg_SHLContext extends Register_instrContext {
		public Reg_SHLContext(Register_instrContext ctx) { copyFrom(ctx); }
	}

	public final Register_instrContext register_instr() throws RecognitionException {
		Register_instrContext _localctx = new Register_instrContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_register_instr);
		try {
			setState(17);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				_localctx = new Reg_ADDContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(2);
				match(T__0);
				}
				break;
			case T__1:
				_localctx = new Reg_SUBContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(3);
				match(T__1);
				}
				break;
			case T__2:
				_localctx = new Reg_ANDContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(4);
				match(T__2);
				}
				break;
			case T__3:
				_localctx = new Reg_ORContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(5);
				match(T__3);
				}
				break;
			case T__4:
				_localctx = new Reg_XORContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(6);
				match(T__4);
				}
				break;
			case T__5:
				_localctx = new Reg_SHLContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(7);
				match(T__5);
				}
				break;
			case T__6:
				_localctx = new Reg_SHRContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(8);
				match(T__6);
				}
				break;
			case T__7:
				_localctx = new Reg_SARContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(9);
				match(T__7);
				}
				break;
			case T__8:
				_localctx = new Reg_MulContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(10);
				match(T__8);
				}
				break;
			case T__9:
				_localctx = new Reg_DIVContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(11);
				match(T__9);
				}
				break;
			case T__10:
				_localctx = new Reg_MODContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(12);
				match(T__10);
				}
				break;
			case T__11:
				_localctx = new Reg_CMPContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(13);
				match(T__11);
				}
				break;
			case T__12:
				_localctx = new Reg_MOVContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(14);
				match(T__12);
				}
				break;
			case T__13:
				_localctx = new Reg_NOTContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(15);
				match(T__13);
				}
				break;
			case T__14:
				_localctx = new Reg_NEGContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(16);
				match(T__14);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u000f\u0014\u0002\u0000\u0007\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0003\u0000\u0012\b\u0000\u0001\u0000\u0000\u0000\u0001\u0000"+
		"\u0000\u0000 \u0000\u0011\u0001\u0000\u0000\u0000\u0002\u0012\u0005\u0001"+
		"\u0000\u0000\u0003\u0012\u0005\u0002\u0000\u0000\u0004\u0012\u0005\u0003"+
		"\u0000\u0000\u0005\u0012\u0005\u0004\u0000\u0000\u0006\u0012\u0005\u0005"+
		"\u0000\u0000\u0007\u0012\u0005\u0006\u0000\u0000\b\u0012\u0005\u0007\u0000"+
		"\u0000\t\u0012\u0005\b\u0000\u0000\n\u0012\u0005\t\u0000\u0000\u000b\u0012"+
		"\u0005\n\u0000\u0000\f\u0012\u0005\u000b\u0000\u0000\r\u0012\u0005\f\u0000"+
		"\u0000\u000e\u0012\u0005\r\u0000\u0000\u000f\u0012\u0005\u000e\u0000\u0000"+
		"\u0010\u0012\u0005\u000f\u0000\u0000\u0011\u0002\u0001\u0000\u0000\u0000"+
		"\u0011\u0003\u0001\u0000\u0000\u0000\u0011\u0004\u0001\u0000\u0000\u0000"+
		"\u0011\u0005\u0001\u0000\u0000\u0000\u0011\u0006\u0001\u0000\u0000\u0000"+
		"\u0011\u0007\u0001\u0000\u0000\u0000\u0011\b\u0001\u0000\u0000\u0000\u0011"+
		"\t\u0001\u0000\u0000\u0000\u0011\n\u0001\u0000\u0000\u0000\u0011\u000b"+
		"\u0001\u0000\u0000\u0000\u0011\f\u0001\u0000\u0000\u0000\u0011\r\u0001"+
		"\u0000\u0000\u0000\u0011\u000e\u0001\u0000\u0000\u0000\u0011\u000f\u0001"+
		"\u0000\u0000\u0000\u0011\u0010\u0001\u0000\u0000\u0000\u0012\u0001\u0001"+
		"\u0000\u0000\u0000\u0001\u0011";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}